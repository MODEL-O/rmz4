; undefined FUN_080ad48c(void)
; entry 0x80ad48c  size 68 bytes

080AD48C: 70b5         push {r4,r5,r6,lr}
080AD48E: 031c         add r3,r0,#0x0
080AD490: 9d6a         ldr r5,[r3,#0x28]
080AD492: 5e7c         ldrb r6,[r3,#0x11]
080AD494: 1c1c         add r4,r3,#0x0
080AD496: b834         add r4,#0xb8
080AD498: 2068         ldr r0,[r4,#0x0]
080AD49A: 0028         cmp r0,#0x0
080AD49C: 0bd0         beq 0x080ad4b6
080AD49E: b430         add r0,#0xb4
080AD4A0: 0022         mov r2,#0x0
080AD4A2: 0121         mov r1,#0x1
080AD4A4: 0170         strb r1,[r0,#0x0]
080AD4A6: 2260         str r2,[r4,#0x0]
080AD4A8: 291c         add r1,r5,#0x0
080AD4AA: bc31         add r1,#0xbc
080AD4AC: 0878         ldrb r0,[r1,#0x0]
080AD4AE: 0028         cmp r0,#0x0
080AD4B0: 01d0         beq 0x080ad4b6
080AD4B2: ff30         add r0,#0xff
080AD4B4: 0870         strb r0,[r1,#0x0]
080AD4B6: 2a1c         add r2,r5,#0x0
080AD4B8: b432         add r2,#0xb4
080AD4BA: 0121         mov r1,#0x1
080AD4BC: b140         lsl r1,r6
080AD4BE: 1078         ldrb r0,[r2,#0x0]
080AD4C0: 8843         bic r0,r1
080AD4C2: 1070         strb r0,[r2,#0x0]
080AD4C4: 181c         add r0,r3,#0x0
080AD4C6: d2f711fa     bl 0x0807f8ec
080AD4CA: 70bc         pop {r4,r5,r6}
080AD4CC: 01bc         pop {r0}
080AD4CE: 0047         bx r0
