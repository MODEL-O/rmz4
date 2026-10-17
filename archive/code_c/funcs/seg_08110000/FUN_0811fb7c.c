// undefined FUN_0811fb7c(void)
// entry 0x811fb7c


undefined4 FUN_0811fb7c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  puVar1 = (undefined4 *)(param_1 + DAT_0811fbc4);
  *puVar1 = 0x7800;
  puVar1[1] = 0x5000;
  iVar3 = param_1 + DAT_0811fbc8;
  FUN_08002c0c(iVar3,puVar1,0,0);
  iVar2 = param_1 + DAT_0811fbcc;
  FUN_08003384(iVar2);
  FUN_080033bc(iVar2,iVar3);
  FUN_0810a1b4(param_1 + DAT_0811fbd0,DAT_0811fbd4,0x40);
  return in_lr;
}


