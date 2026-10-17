; undefined FUN_08013390(void)
; entry 0x8013390  size 66 bytes

08013390: 00b5         push {lr}
08013392: 094a         ldr r2,[0x080133b8]
08013394: 918a         ldrh r1,[r2,#0x14]
08013396: 0120         mov r0,#0x1
08013398: 0840         and r0,r1
0801339A: 0028         cmp r0,#0x0
0801339C: 0ed0         beq 0x080133bc
0801339E: a220         mov r0,#0xa2
080133A0: 4000         lsl r0,r0,#0x1
080133A2: 1118         add r1,r2,r0
080133A4: f020         mov r0,#0xf0
080133A6: 0002         lsl r0,r0,#0x8
080133A8: 0860         str r0,[r1,#0x0]
080133AA: a420         mov r0,#0xa4
080133AC: 4000         lsl r0,r0,#0x1
080133AE: 1118         add r1,r2,r0
080133B0: f020         mov r0,#0xf0
080133B2: 8003         lsl r0,r0,#0xe
080133B4: 0de0         b 0x080133d2
080133BC: a220         mov r0,#0xa2
080133BE: 4000         lsl r0,r0,#0x1
080133C0: 1118         add r1,r2,r0
080133C2: f020         mov r0,#0xf0
080133C4: 0002         lsl r0,r0,#0x8
080133C6: 0860         str r0,[r1,#0x0]
080133C8: a420         mov r0,#0xa4
080133CA: 4000         lsl r0,r0,#0x1
080133CC: 1118         add r1,r2,r0
080133CE: b420         mov r0,#0xb4
080133D0: 8002         lsl r0,r0,#0xa
080133D2: 0860         str r0,[r1,#0x0]
080133D4: 01bc         pop {r0}
080133D6: 0047         bx r0
