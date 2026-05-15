import board
import digitalio
import storage
import usb_cdc
import time

# =====================================================
# DEV MODE KEY
# Hold ESC while plugging USB to enter developer mode
# Matrix position:
# Row GP0
# Col GP5
# =====================================================

ROW_PIN = board.GP0
COL_PIN = board.GP5

row = digitalio.DigitalInOut(ROW_PIN)
row.direction = digitalio.Direction.OUTPUT
row.value = False

col = digitalio.DigitalInOut(COL_PIN)
col.direction = digitalio.Direction.INPUT
col.pull = digitalio.Pull.UP

time.sleep(0.01)

developer_mode = not col.value

row.deinit()
col.deinit()

# =====================================================
# MODES
# =====================================================

if developer_mode:

    print("Developer Mode")

    storage.remount("/", readonly=False)

    usb_cdc.enable(console=True, data=True)

else:

    print("Keyboard Mode")

    usb_cdc.disable()

    storage.remount("/", readonly=True)