; undefined FUN_080f1064(void)
; entry 0x80f1064  size 34 bytes

080F1064: 10b5         push {r4,lr}
080F1066: 041c         add r4,r0,#0x0
080F1068: 607c         ldrb r0,[r4,#0x11]
080F106A: 0728         cmp r0,#0x7
080F106C: 00d9         bls 0x080f1070
080F106E: a4e0         b 0x080f11ba
080F1070: 8000         lsl r0,r0,#0x2
080F1072: 0249         ldr r1,[0x080f107c]
080F1074: 4018         add r0,r0,r1
080F1076: 0068         ldr r0,[r0,#0x0]
080F1078: 8746         mov pc,r0
080F11BA: 201c         add r0,r4,#0x0
080F11BC: 2bf718ff     bl 0x0801cff0
080F11C0: 10bc         pop {r4}
080F11C2: 01bc         pop {r0}
080F11C4: 0047         bx r0
