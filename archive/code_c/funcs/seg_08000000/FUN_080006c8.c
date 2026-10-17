// undefined FUN_080006c8(void)
// entry 0x80006c8


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080006c8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
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
  iVar1 = DAT_0800079c;
  FUN_08001fd4(DAT_0800079c,(*DAT_080007a0 & 0x1f00) << 3,0x580,0x3c0);
  FUN_0810d458(iVar1);
  *DAT_080007a4 = (short)DAT_080007a8;
  iVar3 = DAT_080007b0;
  iVar2 = DAT_080007ac;
  *(undefined1 *)(DAT_080007ac + DAT_080007b0) = 1;
  *(undefined4 *)(iVar2 + 0x15c) = DAT_080007b4;
  *(undefined1 *)(iVar2 + iVar3 + 1) = 0;
  *(undefined4 *)(iVar2 + 0x158) = DAT_080007bc;
  *(undefined4 *)(iVar1 + -4) = 1;
  iVar1 = DAT_080007c0;
  FUN_0810f6f8(DAT_080007c0,0);
  *(undefined2 *)(iVar1 + 0x12) = 0;
  *(undefined4 *)(iVar1 + 0x234) = 0;
  FUN_080011cc(1);
  FUN_080012b8(0,DAT_080007c4);
  FUN_080012b8(2,DAT_080007c8);
  FUN_080011fc();
  return in_lr;
}


