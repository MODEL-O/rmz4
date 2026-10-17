// undefined FUN_0805f08c(void)
// entry 0x805f08c


undefined8 FUN_0805f08c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  int aiStack_4c [3];
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined1 **appuStack_34 [4];
  undefined1 **local_24;
  undefined1 **local_20;
  
  FUN_08129258(auStack_58,PTR_DAT_0805f138,2);
  FUN_08129258(auStack_54,PTR_DAT_0805f13c,2);
  FUN_08129258(auStack_50,PTR_DAT_0805f140,2);
  local_40 = auStack_58;
  local_3c = auStack_54;
  local_38 = auStack_50;
  FUN_08129258(aiStack_4c,&local_40,0xc);
  FUN_08129258(&local_40,PTR_DAT_0805f144,2);
  FUN_08129258(&local_3c,PTR_DAT_0805f148,2);
  FUN_08129258(&local_38,PTR_DAT_0805f14c,2);
  appuStack_34[3] = &local_40;
  local_24 = &local_3c;
  local_20 = &local_38;
  FUN_08129258(appuStack_34,appuStack_34 + 3,0xc);
  iVar1 = FUN_0805f150(param_1);
  iVar2 = FUN_0805f194(appuStack_34[iVar1],2);
  return CONCAT44(in_lr,(uint)*(byte *)(aiStack_4c[iVar1] + iVar2));
}


