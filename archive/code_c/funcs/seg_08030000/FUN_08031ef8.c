// undefined FUN_08031ef8(void)
// entry 0x8031ef8


undefined4 FUN_08031ef8(int param_1)

{
  int iVar1;
  short sVar2;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x142) = *(byte *)(param_1 + 0x142) & 0xfd;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xe) * 4 + DAT_08031f60));
  iVar1 = DAT_08031f64;
  sVar2 = FUN_0802bfe8(param_1,(uint)*(byte *)(param_1 + 0x174) * 8 + DAT_08031f64,0);
  if ((sVar2 != 0) ||
     (sVar2 = FUN_0802c2d4(param_1,(uint)*(byte *)(param_1 + 0x174) * 8 + iVar1,1), sVar2 != 0)) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


