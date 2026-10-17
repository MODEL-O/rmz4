; undefined FUN_08006984(void)
; entry 0x8006984  size 52 bytes

08006984: 30b5         push {r4,r5,lr}
08006986: 0004         lsl r0,r0,#0x10
08006988: 0b4d         ldr r5,[0x080069b8]
0800698A: c10c         lsr r1,r0,#0x13
0800698C: 4c19         add r4,r1,r5
0800698E: 2278         ldrb r2,[r4,#0x0]
08006990: e021         mov r1,#0xe0
08006992: c902         lsl r1,r1,#0xb
08006994: 0140         and r1,r0
08006996: 090c         lsr r1,r1,#0x10
08006998: 101c         add r0,r2,#0x0
0800699A: 0841         asr r0,r1
0800699C: 0123         mov r3,#0x1
0800699E: 1840         and r0,r3
080069A0: 0028         cmp r0,#0x0
080069A2: 06d1         bne 0x080069b2
080069A4: 181c         add r0,r3,#0x0
080069A6: 8840         lsl r0,r1
080069A8: 0243         orr r2,r0
080069AA: 2270         strb r2,[r4,#0x0]
080069AC: 281c         add r0,r5,#0x0
080069AE: 3830         add r0,#0x38
080069B0: 0370         strb r3,[r0,#0x0]
080069B2: 30bc         pop {r4,r5}
080069B4: 01bc         pop {r0}
080069B6: 0047         bx r0
