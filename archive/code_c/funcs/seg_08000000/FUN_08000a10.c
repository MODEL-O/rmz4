// undefined FUN_08000a10(void)
// entry 0x8000a10


void FUN_08000a10(void)

{
  int iVar1;
  undefined1 local_4 [4];
  
  *DAT_08000a54 = (short)DAT_08000a58;
  iVar1 = DAT_08000a5c;
  *(undefined1 **)DAT_08000a5c = local_4;
  *(undefined4 *)(iVar1 + 4) = 0x3000000;
  *(undefined4 *)(iVar1 + 8) = DAT_08000a60;
  *(undefined1 **)iVar1 = local_4;
  *(undefined4 *)(iVar1 + 4) = 0x2000000;
  *(undefined4 *)(iVar1 + 8) = DAT_08000a64;
  iVar1 = DAT_08000a68;
  *(undefined2 *)(DAT_08000a68 + DAT_08000a6c) = 0;
  *(undefined2 *)(iVar1 + 0x1200) = 0;
  return;
}


