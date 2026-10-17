; undefined FUN_080464bc(void)
; entry 0x80464bc  size 82 bytes

080464BC: 10b5         push {r4,lr}
080464BE: 82b0         sub sp,#0x8
080464C0: 041c         add r4,r0,#0x0
080464C2: 1349         ldr r1,[0x08046510]
080464C4: 6846         mov r0,sp
080464C6: 0522         mov r2,#0x5
080464C8: e2f0c6fe     bl 0x08129258
080464CC: 201c         add r0,r4,#0x0
080464CE: d6f7e5fb     bl 0x0801cc9c
080464D2: 201c         add r0,r4,#0x0
080464D4: d6f70afd     bl 0x0801ceec
080464D8: a17a         ldrb r1,[r4,#0xa]
080464DA: 0120         mov r0,#0x1
080464DC: 0843         orr r0,r1
080464DE: 0221         mov r1,#0x2
080464E0: 0843         orr r0,r1
080464E2: a072         strb r0,[r4,#0xa]
080464E4: 607c         ldrb r0,[r4,#0x11]
080464E6: 6844         add r0,sp
080464E8: 0a4a         ldr r2,[0x08046514]
080464EA: 111c         add r1,r2,#0x0
080464EC: 0078         ldrb r0,[r0,#0x0]
080464EE: 0918         add r1,r1,r0
080464F0: 0904         lsl r1,r1,#0x10
080464F2: 090c         lsr r1,r1,#0x10
080464F4: 201c         add r0,r4,#0x0
080464F6: d6f703fd     bl 0x0801cf00
080464FA: 201c         add r0,r4,#0x0
080464FC: d6f71afe     bl 0x0801d134
08046500: 201c         add r0,r4,#0x0
08046502: fff715ff     bl 0x08046330
08046506: 02b0         add sp,#0x8
08046508: 10bc         pop {r4}
0804650A: 01bc         pop {r0}
0804650C: 0047         bx r0
