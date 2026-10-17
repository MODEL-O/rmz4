; undefined FUN_080377a0(void)
; entry 0x80377a0  size 36 bytes

080377A0: 00b5         push {lr}
080377A2: 0849         ldr r1,[0x080377c4]
080377A4: 4318         add r3,r0,r1
080377A6: 1978         ldrb r1,[r3,#0x0]
080377A8: 0422         mov r2,#0x4
080377AA: 1143         orr r1,r2
080377AC: 1970         strb r1,[r3,#0x0]
080377AE: 064a         ldr r2,[0x080377c8]
080377B0: 064b         ldr r3,[0x080377cc]
080377B2: c118         add r1,r0,r3
080377B4: 0978         ldrb r1,[r1,#0x0]
080377B6: 8900         lsl r1,r1,#0x2
080377B8: 8918         add r1,r1,r2
080377BA: 0968         ldr r1,[r1,#0x0]
080377BC: f1f0e0fb     bl 0x08128f80
080377C0: 01bc         pop {r0}
080377C2: 0047         bx r0
