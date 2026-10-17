; undefined FUN_0810df70(void)
; entry 0x810df70  size 30 bytes

0810DF70: 00b5         push {lr}
0810DF72: 074b         ldr r3,[0x0810df90]
0810DF74: 1869         ldr r0,[r3,#0x10]
0810DF76: 0028         cmp r0,#0x0
0810DF78: 07d0         beq 0x0810df8a
0810DF7A: 064a         ldr r2,[0x0810df94]
0810DF7C: 917b         ldrb r1,[r2,#0xe]
0810DF7E: 0120         mov r0,#0x1
0810DF80: 0843         orr r0,r1
0810DF82: 9073         strb r0,[r2,#0xe]
0810DF84: 181c         add r0,r3,#0x0
0810DF86: 00f0f3f9     bl 0x0810e370
0810DF8A: 01bc         pop {r0}
0810DF8C: 0047         bx r0
