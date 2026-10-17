; undefined FUN_080fbd44(void)
; entry 0x80fbd44  size 24 bytes

080FBD44: 10b5         push {r4,lr}
080FBD46: 041c         add r4,r0,#0x0
080FBD48: bd20         mov r0,#0xbd
080FBD4A: 4000         lsl r0,r0,#0x1
080FBD4C: 06f706ff     bl 0x08002b5c
080FBD50: 201c         add r0,r4,#0x0
080FBD52: edf7fbfb     bl 0x080e954c
080FBD56: 10bc         pop {r4}
080FBD58: 01bc         pop {r0}
080FBD5A: 0047         bx r0
