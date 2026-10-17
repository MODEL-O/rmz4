; undefined FUN_08095ca8(void)
; entry 0x8095ca8  size 32 bytes

08095CA8: 10b5         push {r4,lr}
08095CAA: 041c         add r4,r0,#0x0
08095CAC: 607c         ldrb r0,[r4,#0x11]
08095CAE: 0649         ldr r1,[0x08095cc8]
08095CB0: 8000         lsl r0,r0,#0x2
08095CB2: 4018         add r0,r0,r1
08095CB4: 0021         mov r1,#0x0
08095CB6: 405e         ldrsh r0,[r0,r1]
08095CB8: 6cf750ff     bl 0x08002b5c
08095CBC: 201c         add r0,r4,#0x0
08095CBE: e9f715fe     bl 0x0807f8ec
08095CC2: 10bc         pop {r4}
08095CC4: 01bc         pop {r0}
08095CC6: 0047         bx r0
