// undefined FUN_080006c8(void)
// entry 0x80006c8


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080006c8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FUN_08000a10();
  FUN_08000ba8();
  FUN_080011c0();
  FUN_08001454();
  FUN_0800155c();
  _DAT_04000000 = 0x80;
  FUN_08001c04();
  FUN_0800202c();
  FUN_08002348();
  FUN_08002664();
  FUN_08002820();
  FUN_080028e0();
  FUN_0800290c();
  FUN_08002970();
  FUN_08002990();
  iVar1 = 0x0202f620;
  FUN_08001fd4(0x0202f620,((*(int *)0x02000a04) & 0x1f00) << 3,0x580,0x3c0);
  FUN_0810d458(iVar1);
  (*(int *)0x03002ac0) = (short)0x00007fff;
  iVar3 = 0x00000165;
  iVar2 = 0x03001590;
  *(undefined1 *)(0x03001590 + 0x00000165) = 1;
  *(undefined4 *)(iVar2 + 0x15c) = 0x080009f9;
  *(undefined1 *)(iVar2 + iVar3 + 1) = 0;
  *(undefined4 *)(iVar2 + 0x158) = 0x08000a05;
  *(undefined4 *)(iVar1 + -4) = 1;
  iVar1 = 0x0202f3b0;
  FUN_0810f6f8(0x0202f3b0,0);
  *(undefined2 *)(iVar1 + 0x12) = 0;
  *(undefined4 *)(iVar1 + 0x234) = 0;
  FUN_080011cc(1);
  FUN_080012b8(0,0x080007cd);
  FUN_080012b8(2,0x080008c9);
  FUN_080011fc();
  return;
}


