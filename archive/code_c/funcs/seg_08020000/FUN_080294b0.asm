; undefined FUN_080294b0(void)
; entry 0x80294b0  size 36 bytes

080294B0: 30b5         push {r4,r5,lr}
080294B2: 084d         ldr r5,[0x080294d4]
080294B4: 2888         ldrh r0,[r5,#0x0]
080294B6: 0028         cmp r0,#0x0
080294B8: 08d0         beq 0x080294cc
080294BA: 074a         ldr r2,[0x080294d8]
080294BC: 117a         ldrb r1,[r2,#0x8]
080294BE: 7f20         mov r0,#0x7f
080294C0: 0840         and r0,r1
080294C2: 0024         mov r4,#0x0
080294C4: 1072         strb r0,[r2,#0x8]
080294C6: d9f7c3fa     bl 0x08002a50
080294CA: 2c80         strh r4,[r5,#0x0]
080294CC: 0020         mov r0,#0x0
080294CE: 30bc         pop {r4,r5}
080294D0: 02bc         pop {r1}
080294D2: 0847         bx r1
