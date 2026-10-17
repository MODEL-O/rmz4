; undefined FUN_08123c84(void)
; entry 0x8123c84  size 36 bytes

08123C84: 00b5         push {lr}
08123C86: 0849         ldr r1,[0x08123ca8]
08123C88: 4218         add r2,r0,r1
08123C8A: 5069         ldr r0,[r2,#0x14]
08123C8C: 0028         cmp r0,#0x0
08123C8E: 03d0         beq 0x08123c98
08123C90: 0138         sub r0,#0x1
08123C92: 5061         str r0,[r2,#0x14]
08123C94: 0028         cmp r0,#0x0
08123C96: 04d1         bne 0x08123ca2
08123C98: 107e         ldrb r0,[r2,#0x18]
08123C9A: 0130         add r0,#0x1
08123C9C: 0021         mov r1,#0x0
08123C9E: 1076         strb r0,[r2,#0x18]
08123CA0: 5176         strb r1,[r2,#0x19]
08123CA2: 0120         mov r0,#0x1
08123CA4: 02bc         pop {r1}
08123CA6: 0847         bx r1
