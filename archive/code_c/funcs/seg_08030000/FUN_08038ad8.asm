; undefined FUN_08038ad8(void)
; entry 0x8038ad8  size 50 bytes

08038AD8: 00b5         push {lr}
08038ADA: 011c         add r1,r0,#0x0
08038ADC: 0a1c         add r2,r1,#0x0
08038ADE: b432         add r2,#0xb4
08038AE0: 907c         ldrb r0,[r2,#0x12]
08038AE2: 1428         cmp r0,#0x14
08038AE4: 07d0         beq 0x08038af6
08038AE6: d07c         ldrb r0,[r2,#0x13]
08038AE8: 0228         cmp r0,#0x2
08038AEA: 06d1         bne 0x08038afa
08038AEC: 081c         add r0,r1,#0x0
08038AEE: f230         add r0,#0xf2
08038AF0: 0078         ldrb r0,[r0,#0x0]
08038AF2: 0028         cmp r0,#0x0
08038AF4: 06d0         beq 0x08038b04
08038AF6: 0120         mov r0,#0x1
08038AF8: 05e0         b 0x08038b06
08038AFA: 081c         add r0,r1,#0x0
08038AFC: f230         add r0,#0xf2
08038AFE: 0078         ldrb r0,[r0,#0x0]
08038B00: 0128         cmp r0,#0x1
08038B02: f8d0         beq 0x08038af6
08038B04: 0020         mov r0,#0x0
08038B06: 02bc         pop {r1}
08038B08: 0847         bx r1
