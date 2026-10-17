; undefined FUN_080e954c(void)
; entry 0x80e954c  size 62 bytes

080E954C: 021c         add r2,r0,#0x0
080E954E: 917a         ldrb r1,[r2,#0xa]
080E9550: fe20         mov r0,#0xfe
080E9552: 0840         and r0,r1
080E9554: 0021         mov r1,#0x0
080E9556: 9072         strb r0,[r2,#0xa]
080E9558: 101c         add r0,r2,#0x0
080E955A: 8c30         add r0,#0x8c
080E955C: 0160         str r1,[r0,#0x0]
080E955E: 0430         add r0,#0x4
080E9560: 0160         str r1,[r0,#0x0]
080E9562: 0430         add r0,#0x4
080E9564: 0170         strb r1,[r0,#0x0]
080E9566: 917a         ldrb r1,[r2,#0xa]
080E9568: fb20         mov r0,#0xfb
080E956A: 0840         and r0,r1
080E956C: 9072         strb r0,[r2,#0xa]
080E956E: d17a         ldrb r1,[r2,#0xb]
080E9570: f720         mov r0,#0xf7
080E9572: 0840         and r0,r1
080E9574: d072         strb r0,[r2,#0xb]
080E9576: 0549         ldr r1,[0x080e958c]
080E9578: 507a         ldrb r0,[r2,#0x9]
080E957A: 8000         lsl r0,r0,#0x2
080E957C: 4018         add r0,r0,r1
080E957E: 0421         mov r1,#0x4
080E9580: d160         str r1,[r2,#0xc]
080E9582: 0068         ldr r0,[r0,#0x0]
080E9584: 0069         ldr r0,[r0,#0x10]
080E9586: 5061         str r0,[r2,#0x14]
080E9588: 7047         bx lr
