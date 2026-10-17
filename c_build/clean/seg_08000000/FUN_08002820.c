// undefined FUN_08002820(void)
// entry 0x8002820


void FUN_08002820(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  undefined4 uStack_4;
  
  iVar1 = DAT_08002858;
  *(undefined4 *)(DAT_08002858 + DAT_0800285c) = 0x1040;
  *(int *)(iVar1 + 0x400) = iVar1;
  iVar2 = DAT_08002860;
  local_8 = 0x200;
  *(undefined4 **)DAT_08002860 = &local_8;
  *(int *)(iVar2 + 4) = iVar1;
  *(undefined4 *)(iVar2 + 8) = DAT_08002864;
  uStack_4 = in_lr;
  FUN_08002868(*(undefined4 *)(iVar2 + 8));
  return uStack_4;
}


