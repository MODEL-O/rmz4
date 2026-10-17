// undefined FUN_08073b10(void)
// entry 0x8073b10


void FUN_08073b10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined4 local_38 [4];
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  
  FUN_08129258(auStack_58,DAT_08073b80,8);
  FUN_08129258(auStack_50,DAT_08073b84,8);
  FUN_08129258(auStack_48,DAT_08073b88,8);
  FUN_08129258(auStack_40,DAT_08073b8c,8);
  local_28 = auStack_58;
  local_24 = auStack_50;
  local_20 = auStack_48;
  local_1c = auStack_40;
  FUN_08129258(local_38,&local_28,0x10);
  iVar2 = *(int *)(*DAT_08073b90 + 0x54);
  iVar3 = *(int *)(param_1 + 0xcc);
  if (iVar2 < iVar3 + 0x3800) {
    iVar1 = 0;
  }
  else if (iVar2 < iVar3 + 0x6800) {
    iVar1 = 1;
  }
  else {
    iVar1 = 3;
    if (iVar2 < iVar3 + 0x9800) {
      iVar1 = 2;
    }
  }
  FUN_08073e30(local_38[iVar1],8);
  return;
}


