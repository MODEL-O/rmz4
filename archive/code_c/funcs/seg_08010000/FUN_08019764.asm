; undefined FUN_08019764(void)
; entry 0x8019764  size 30 bytes

08019764: 00b5         push {lr}
08019766: 82b0         sub sp,#0x8
08019768: 0648         ldr r0,[0x08019784]
0801976A: 0190         str r0,[sp,#0x4]
0801976C: 0648         ldr r0,[0x08019788]
0801976E: 0090         str r0,[sp,#0x0]
08019770: 4e20         mov r0,#0x4e
08019772: 5d21         mov r1,#0x5d
08019774: 6a46         mov r2,sp
08019776: edf7f9fd     bl 0x0800736c
0801977A: 0120         mov r0,#0x1
0801977C: 02b0         add sp,#0x8
0801977E: 02bc         pop {r1}
08019780: 0847         bx r1
