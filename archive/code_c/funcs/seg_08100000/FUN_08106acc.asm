; undefined FUN_08106acc(void)
; entry 0x8106acc  size 44 bytes

08106ACC: f0b5         push {r4,r5,r6,r7,lr}
08106ACE: 4746         mov r7,r8
08106AD0: 80b4         push {r7}
08106AD2: 071c         add r7,r0,#0x0
08106AD4: b86a         ldr r0,[r7,#0x28]
08106AD6: 8069         ldr r0,[r0,#0x18]
08106AD8: 4068         ldr r0,[r0,#0x4]
08106ADA: 8046         mov r8,r0
08106ADC: 787b         ldrb r0,[r7,#0xd]
08106ADE: 0528         cmp r0,#0x5
08106AE0: 00d9         bls 0x08106ae4
08106AE2: 30e1         b 0x08106d46
08106AE4: 8000         lsl r0,r0,#0x2
08106AE6: 0249         ldr r1,[0x08106af0]
08106AE8: 4018         add r0,r0,r1
08106AEA: 0068         ldr r0,[r0,#0x0]
08106AEC: 8746         mov pc,r0
08106D46: 08bc         pop {r3}
08106D48: 9846         mov r8,r3
08106D4A: f0bc         pop {r4,r5,r6,r7}
08106D4C: 01bc         pop {r0}
08106D4E: 0047         bx r0
