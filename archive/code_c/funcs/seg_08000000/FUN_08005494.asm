; undefined FUN_08005494(void)
; entry 0x8005494  size 32 bytes

08005494: 30b5         push {r4,r5,lr}
08005496: 81b0         sub sp,#0x4
08005498: 0421         mov r1,#0x4
0800549A: 4156         ldrsb r1,[r0,r1]
0800549C: 0268         ldr r2,[r0,#0x0]
0800549E: 0624         mov r4,#0x6
080054A0: 035f         ldrsh r3,[r0,r4]
080054A2: 0825         mov r5,#0x8
080054A4: 445f         ldrsh r4,[r0,r5]
080054A6: 0094         str r4,[sp,#0x0]
080054A8: fff7caff     bl 0x08005440
080054AC: 01b0         add sp,#0x4
080054AE: 30bc         pop {r4,r5}
080054B0: 01bc         pop {r0}
080054B2: 0047         bx r0
