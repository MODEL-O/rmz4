; undefined FUN_080fcc10(void)
; entry 0x80fcc10  size 64 bytes

080FCC10: 10b5         push {r4,lr}
080FCC12: 011c         add r1,r0,#0x0
080FCC14: 4a69         ldr r2,[r1,#0x14]
080FCC16: 0120         mov r0,#0x1
080FCC18: 1040         and r0,r2
080FCC1A: 0028         cmp r0,#0x0
080FCC1C: 15d0         beq 0x080fcc4a
080FCC1E: cc6a         ldr r4,[r1,#0x2c]
080FCC20: 8020         mov r0,#0x80
080FCC22: 8000         lsl r0,r0,#0x2
080FCC24: 1040         and r0,r2
080FCC26: 0028         cmp r0,#0x0
080FCC28: 0fd0         beq 0x080fcc4a
080FCC2A: 8020         mov r0,#0x80
080FCC2C: 8002         lsl r0,r0,#0xa
080FCC2E: 0240         and r2,r0
080FCC30: 002a         cmp r2,#0x0
080FCC32: 0ad0         beq 0x080fcc4a
080FCC34: 0648         ldr r0,[0x080fcc50]
080FCC36: 0068         ldr r0,[r0,#0x0]
080FCC38: 0028         cmp r0,#0x0
080FCC3A: 06d0         beq 0x080fcc4a
080FCC3C: 0521         mov r1,#0x5
080FCC3E: 0a22         mov r2,#0xa
080FCC40: 3df79afc     bl 0x0803a578
080FCC44: 211c         add r1,r4,#0x0
080FCC46: bd31         add r1,#0xbd
080FCC48: 0870         strb r0,[r1,#0x0]
080FCC4A: 10bc         pop {r4}
080FCC4C: 01bc         pop {r0}
080FCC4E: 0047         bx r0
