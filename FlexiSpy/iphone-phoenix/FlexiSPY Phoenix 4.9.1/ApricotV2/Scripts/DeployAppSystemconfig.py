import os

BUILD_PATH 	= '../Packages/Applications/systemconfig.app'
DEVICE_IP 	= '192.168.20.30'
DAEMON_PATH = '/Applications/'
UI_PATH 	= '/Applications/systemconfig.app'

COMMAND_RM 	= 'ssh root@%s rm -rf %s' % (DEVICE_IP, UI_PATH)
os.system(COMMAND_RM)
COMMAND_SCP = 'scp -r %s root@%s:%s' % (BUILD_PATH, DEVICE_IP, DAEMON_PATH)
os.system(COMMAND_SCP)
