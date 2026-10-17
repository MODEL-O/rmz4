// undefined FUN_08001c04(void)
// entry 0x8001c04


undefined4 FUN_08001c04(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_4 [4];
  
  puVar1 = 0x020007c0;
  (*(undefined4 *)0x020007c0) = 0;
  puVar1[0x32] = 0;
  iVar2 = 0x040000d4;
  *(undefined1 **)0x040000d4 = local_4;
  *(undefined4 *)(iVar2 + 4) = 0x6000000;
  *(undefined4 *)(iVar2 + 8) = 0x85006000;
  return *(undefined4 *)(iVar2 + 8);
}


