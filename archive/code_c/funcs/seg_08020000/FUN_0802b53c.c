// undefined FUN_0802b53c(void)
// entry 0x802b53c


undefined4 FUN_0802b53c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = DAT_0802b5a0;
  iVar1 = DAT_0802b568;
  if (param_2 == 0xe) {
    FUN_08128be0(DAT_0802b564 + 0x1c0,DAT_0802b568,8);
    FUN_08128be0(DAT_0802b56c + 0x1c0,iVar1 + 0x80,8);
  }
  else {
    FUN_08128be0(param_2 * 0x20 + DAT_0802b59c,DAT_0802b5a0,8);
    FUN_08128be0(param_2 * 0x20 + DAT_0802b5a4,iVar2 + 0x180,8);
  }
  return in_lr;
}


