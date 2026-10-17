; undefined FUN_081251b8(void)
; entry 0x81251b8  size 36 bytes

081251B8: 00b5         push {lr}
081251BA: 0849         ldr r1,[0x081251dc]
081251BC: 4218         add r2,r0,r1
081251BE: 5069         ldr r0,[r2,#0x14]
081251C0: 0028         cmp r0,#0x0
081251C2: 03d0         beq 0x081251cc
081251C4: 0138         sub r0,#0x1
081251C6: 5061         str r0,[r2,#0x14]
081251C8: 0028         cmp r0,#0x0
081251CA: 04d1         bne 0x081251d6
081251CC: 107e         ldrb r0,[r2,#0x18]
081251CE: 0130         add r0,#0x1
081251D0: 0021         mov r1,#0x0
081251D2: 1076         strb r0,[r2,#0x18]
081251D4: 5176         strb r1,[r2,#0x19]
081251D6: 0120         mov r0,#0x1
081251D8: 02bc         pop {r1}
081251DA: 0847         bx r1
