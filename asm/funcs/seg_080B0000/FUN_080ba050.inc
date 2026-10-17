@ FUN_080ba050  entry 0x080ba050  size 20
.thumb
.org 0xba050
FUN_080ba050:
	push {lr}	@ 000ba050 00b5
.org 0xba052
	ldr r2, [pc, #16]	@ 000ba052 044a
.org 0xba054
	ldrb r1, [r0, #13]	@ 000ba054 417b
.org 0xba056
	lsls r1, r1, #2	@ 000ba056 8900
.org 0xba058
	adds r1, r1, r2	@ 000ba058 8918
.org 0xba05a
	ldr r1, [r1, #0]	@ 000ba05a 0968
.org 0xba05c
	bl 0x128f80	@ 000ba05c 6ef090ff
.org 0xba060
	pop {r0}	@ 000ba060 01bc
.org 0xba062
	bx r0	@ 000ba062 0047
