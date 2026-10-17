; undefined FUN_08103994(void)
; entry 0x8103994  size 70 bytes

08103994: 30b5         push {r4,r5,lr}
08103996: 051c         add r5,r0,#0x0
08103998: c120         mov r0,#0xc1
0810399A: 4000         lsl r0,r0,#0x1
0810399C: fff6b8f8     bl 0x08002b10
081039A0: 0024         mov r4,#0x0
081039A2: e100         lsl r1,r4,#0x3
081039A4: 091b         sub r1,r1,r4
081039A6: 8900         lsl r1,r1,#0x2
081039A8: 0c48         ldr r0,[0x081039dc]
081039AA: 0918         add r1,r1,r0
081039AC: 281c         add r0,r5,#0x0
081039AE: 5430         add r0,#0x54
081039B0: 0022         mov r2,#0x0
081039B2: 0023         mov r3,#0x0
081039B4: e0f7fef9     bl 0x080e3db4
081039B8: 601c         add r0,r4,#0x1
081039BA: 0006         lsl r0,r0,#0x18
081039BC: 040e         lsr r4,r0,#0x18
081039BE: 092c         cmp r4,#0x9
081039C0: efd9         bls 0x081039a2
081039C2: 0749         ldr r1,[0x081039e0]
081039C4: 687a         ldrb r0,[r5,#0x9]
081039C6: 8000         lsl r0,r0,#0x2
081039C8: 4018         add r0,r0,r1
081039CA: 0421         mov r1,#0x4
081039CC: e960         str r1,[r5,#0xc]
081039CE: 0068         ldr r0,[r0,#0x0]
081039D0: 0069         ldr r0,[r0,#0x10]
081039D2: 6861         str r0,[r5,#0x14]
081039D4: 30bc         pop {r4,r5}
081039D6: 01bc         pop {r0}
081039D8: 0047         bx r0
