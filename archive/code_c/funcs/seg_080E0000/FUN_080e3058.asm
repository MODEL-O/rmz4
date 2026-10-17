; undefined FUN_080e3058(void)
; entry 0x80e3058  size 52 bytes

080E3058: 10b5         push {r4,lr}
080E305A: 041c         add r4,r0,#0x0
080E305C: 39f7c8ff     bl 0x0801cff0
080E3060: a07c         ldrb r0,[r4,#0x12]
080E3062: 0138         sub r0,#0x1
080E3064: a074         strb r0,[r4,#0x12]
080E3066: 0006         lsl r0,r0,#0x18
080E3068: 000e         lsr r0,r0,#0x18
080E306A: ff28         cmp r0,#0xff
080E306C: 0bd1         bne 0x080e3086
080E306E: 0749         ldr r1,[0x080e308c]
080E3070: 607a         ldrb r0,[r4,#0x9]
080E3072: 8000         lsl r0,r0,#0x2
080E3074: 4018         add r0,r0,r1
080E3076: 0221         mov r1,#0x2
080E3078: e160         str r1,[r4,#0xc]
080E307A: 0068         ldr r0,[r0,#0x0]
080E307C: 8068         ldr r0,[r0,#0x8]
080E307E: 6061         str r0,[r4,#0x14]
080E3080: 201c         add r0,r4,#0x0
080E3082: fff747ff     bl 0x080e2f14
080E3086: 10bc         pop {r4}
080E3088: 01bc         pop {r0}
080E308A: 0047         bx r0
