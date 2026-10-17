; undefined FUN_080af814(void)
; entry 0x80af814  size 50 bytes

080AF814: 30b5         push {r4,r5,lr}
080AF816: 041c         add r4,r0,#0x0
080AF818: 251c         add r5,r4,#0x0
080AF81A: c035         add r5,#0xc0
080AF81C: 2868         ldr r0,[r5,#0x0]
080AF81E: 7bf7e1fd     bl 0x0802b3e4
080AF822: 0028         cmp r0,#0x0
080AF824: 0cd0         beq 0x080af840
080AF826: 207c         ldrb r0,[r4,#0x10]
080AF828: 0028         cmp r0,#0x0
080AF82A: 04d1         bne 0x080af836
080AF82C: 201c         add r0,r4,#0x0
080AF82E: 7430         add r0,#0x74
080AF830: 0549         ldr r1,[0x080af848]
080AF832: 55f7a7ff     bl 0x08005784
080AF836: 0021         mov r1,#0x0
080AF838: 2960         str r1,[r5,#0x0]
080AF83A: 0120         mov r0,#0x1
080AF83C: 6073         strb r0,[r4,#0xd]
080AF83E: a173         strb r1,[r4,#0xe]
080AF840: 30bc         pop {r4,r5}
080AF842: 01bc         pop {r0}
080AF844: 0047         bx r0
