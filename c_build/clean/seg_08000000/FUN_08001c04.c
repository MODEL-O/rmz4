// undefined FUN_08001c04(void)
// entry 0x8001c04


undefined4 FUN_08001c04(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_4 [4];
  
  puVar1 = DAT_08001c2c;
  *(int *)DAT_08001c2c = 0;
  puVar1[0x32] = 0;
  iVar2 = DAT_08001c34;
  *(undefined1 **)DAT_08001c34 = local_4;
  *(undefined4 *)(iVar2 + 4) = 0x6000000;
  *(undefined4 *)(iVar2 + 8) = DAT_08001c38;
  return *(undefined4 *)(iVar2 + 8);
}


