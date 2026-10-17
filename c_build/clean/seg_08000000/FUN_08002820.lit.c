// undefined FUN_08002820(void)
// entry 0x8002820


undefined4 FUN_08002820(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_8;
  undefined4 uStack_4;
  
  iVar1 = 0x03002ed0;
  *(undefined4 *)(0x03002ed0 + 0x00000404) = 0x1040;
  *(int *)(iVar1 + 0x400) = iVar1;
  iVar2 = 0x040000d4;
  local_8 = 0x200;
  *(undefined4 **)0x040000d4 = &local_8;
  *(int *)(iVar2 + 4) = iVar1;
  *(undefined4 *)(iVar2 + 8) = 0x85000100;
  uStack_4 = in_lr;
  FUN_08002868(*(undefined4 *)(iVar2 + 8));
  return uStack_4;
}


