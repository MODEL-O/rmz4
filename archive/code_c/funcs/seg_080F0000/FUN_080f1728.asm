; undefined FUN_080f1728(void)
; entry 0x80f1728  size 66 bytes

080F1728: 10b5         push {r4,lr}
080F172A: 041c         add r4,r0,#0x0
080F172C: 607c         ldrb r0,[r4,#0x11]
080F172E: 0028         cmp r0,#0x0
080F1730: 15d1         bne 0x080f175e
080F1732: 0e48         ldr r0,[0x080f176c]
080F1734: a522         mov r2,#0xa5
080F1736: 5200         lsl r2,r2,#0x1
080F1738: 8018         add r0,r0,r2
080F173A: 0d49         ldr r1,[0x080f1770]
080F173C: 0180         strh r1,[r0,#0x0]
080F173E: 0d48         ldr r0,[0x080f1774]
080F1740: 8018         add r0,r0,r2
080F1742: 0921         mov r1,#0x9
080F1744: 0180         strh r1,[r0,#0x0]
080F1746: 0c49         ldr r1,[0x080f1778]
080F1748: 201c         add r0,r4,#0x0
080F174A: 2bf7d9fb     bl 0x0801cf00
080F174E: 606d         ldr r0,[r4,#0x54]
080F1750: a16d         ldr r1,[r4,#0x58]
080F1752: 16f7effe     bl 0x08008534
080F1756: a065         str r0,[r4,#0x58]
080F1758: 607c         ldrb r0,[r4,#0x11]
080F175A: 0130         add r0,#0x1
080F175C: 6074         strb r0,[r4,#0x11]
080F175E: 201c         add r0,r4,#0x0
080F1760: 2bf746fc     bl 0x0801cff0
080F1764: 10bc         pop {r4}
080F1766: 01bc         pop {r0}
080F1768: 0047         bx r0
