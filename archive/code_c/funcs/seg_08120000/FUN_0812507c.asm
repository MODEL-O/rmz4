; undefined FUN_0812507c(void)
; entry 0x812507c  size 40 bytes

0812507C: 00b5         push {lr}
0812507E: 011c         add r1,r0,#0x0
08125080: 0622         mov r2,#0x6
08125082: 885e         ldrsh r0,[r1,r2]
08125084: 0028         cmp r0,#0x0
08125086: 0ad0         beq 0x0812509e
08125088: 064a         ldr r2,[0x081250a4]
0812508A: 8818         add r0,r1,r2
0812508C: 0649         ldr r1,[0x081250a8]
0812508E: 0269         ldr r2,[r0,#0x10]
08125090: 886a         ldr r0,[r1,#0x28]
08125092: 8242         cmp r2,r0
08125094: 03d9         bls 0x0812509e
08125096: 0320         mov r0,#0x3
08125098: 111c         add r1,r2,#0x0
0812509A: e1f6e7fc     bl 0x08006a6c
0812509E: 0020         mov r0,#0x0
081250A0: 02bc         pop {r1}
081250A2: 0847         bx r1
