; undefined FUN_08124aac(void)
; entry 0x8124aac  size 36 bytes

08124AAC: 00b5         push {lr}
08124AAE: 0849         ldr r1,[0x08124ad0]
08124AB0: 4218         add r2,r0,r1
08124AB2: 5069         ldr r0,[r2,#0x14]
08124AB4: 0028         cmp r0,#0x0
08124AB6: 03d0         beq 0x08124ac0
08124AB8: 0138         sub r0,#0x1
08124ABA: 5061         str r0,[r2,#0x14]
08124ABC: 0028         cmp r0,#0x0
08124ABE: 04d1         bne 0x08124aca
08124AC0: 107e         ldrb r0,[r2,#0x18]
08124AC2: 0130         add r0,#0x1
08124AC4: 0021         mov r1,#0x0
08124AC6: 1076         strb r0,[r2,#0x18]
08124AC8: 5176         strb r1,[r2,#0x19]
08124ACA: 0120         mov r0,#0x1
08124ACC: 02bc         pop {r1}
08124ACE: 0847         bx r1
