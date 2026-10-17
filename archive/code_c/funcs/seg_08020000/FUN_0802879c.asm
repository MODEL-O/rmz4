; undefined FUN_0802879c(void)
; entry 0x802879c  size 52 bytes

0802879C: 30b5         push {r4,r5,lr}
0802879E: 011c         add r1,r0,#0x0
080287A0: cb68         ldr r3,[r1,#0xc]
080287A2: 5878         ldrb r0,[r3,#0x1]
080287A4: 0401         lsl r4,r0,#0x4
080287A6: 0a1c         add r2,r1,#0x0
080287A8: 1032         add r2,#0x10
080287AA: 1019         add r0,r2,r4
080287AC: 0068         ldr r0,[r0,#0x0]
080287AE: 0028         cmp r0,#0x0
080287B0: 0ad0         beq 0x080287c8
080287B2: 0225         mov r5,#0x2
080287B4: 585f         ldrsh r0,[r3,r5]
080287B6: 0001         lsl r0,r0,#0x4
080287B8: 1018         add r0,r2,r0
080287BA: 0268         ldr r2,[r0,#0x0]
080287BC: 002a         cmp r2,#0x0
080287BE: 03d0         beq 0x080287c8
080287C0: 081c         add r0,r1,#0x0
080287C2: 1430         add r0,#0x14
080287C4: 0019         add r0,r0,r4
080287C6: 0260         str r2,[r0,#0x0]
080287C8: 0020         mov r0,#0x0
080287CA: 30bc         pop {r4,r5}
080287CC: 02bc         pop {r1}
080287CE: 0847         bx r1
