// undefined FUN_08089e58(void)
// entry 0x8089e58


undefined8 FUN_08089e58(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  byte bVar3;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = DAT_08089ea8[1];
  local_18 = *DAT_08089ea8;
  if ((*(int *)(param_1 + 0xbc) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar2 = FUN_0802adac(0,param_1,&local_18);
    *(int *)(param_1 + 0xbc) = iVar2;
    if (iVar2 != 0) {
      bVar3 = *(byte *)(param_1 + 0x97) & 0xf0;
      if ((bVar3 == 0x10) || (bVar3 != 0x30)) {
        uVar1 = 8;
      }
      else {
        uVar1 = 9;
      }
      *(undefined1 *)(param_1 + 0xd) = uVar1;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return CONCAT44(in_lr,1);
}


