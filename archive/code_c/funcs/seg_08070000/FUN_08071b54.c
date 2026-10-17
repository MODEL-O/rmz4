// undefined FUN_08071b54(void)
// entry 0x8071b54


undefined4 FUN_08071b54(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 in_lr;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 *apuStack_30 [4];
  undefined1 *local_20;
  undefined1 *local_1c;
  
  FUN_08129258(auStack_40,PTR_DAT_08071be0,3);
  FUN_08129258(auStack_3c,PTR_DAT_08071be4,3);
  puVar1 = PTR_DAT_08071be8;
  FUN_08129258(auStack_38,PTR_DAT_08071be8,3);
  FUN_08129258(auStack_34,puVar1,3);
  apuStack_30[3] = auStack_3c;
  local_20 = auStack_38;
  local_1c = auStack_34;
  FUN_08129258(apuStack_30,apuStack_30 + 3,0xc);
  iVar2 = FUN_08073e30(apuStack_30[*(byte *)(param_1 + 0xc3)],3);
  *(undefined1 *)(param_1 + 0xe) = auStack_40[iVar2];
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08071bec));
  return in_lr;
}


