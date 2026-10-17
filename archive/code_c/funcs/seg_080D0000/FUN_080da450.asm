; undefined FUN_080da450(void)
; entry 0x80da450  size 30 bytes

080DA450: 00b5         push {lr}
080DA452: 0022         mov r2,#0x0
080DA454: 1021         mov r1,#0x10
080DA456: 8174         strb r1,[r0,#0x12]
080DA458: 816d         ldr r1,[r0,#0x58]
080DA45A: 054b         ldr r3,[0x080da470]
080DA45C: c918         add r1,r1,r3
080DA45E: 8165         str r1,[r0,#0x58]
080DA460: c265         str r2,[r0,#0x5c]
080DA462: 0266         str r2,[r0,#0x60]
080DA464: 0349         ldr r1,[0x080da474]
080DA466: 42f74bfd     bl 0x0801cf00
080DA46A: 01bc         pop {r0}
080DA46C: 0047         bx r0
