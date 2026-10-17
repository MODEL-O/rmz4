// undefined FUN_08081148(void)
// entry 0x8081148


undefined4 FUN_08081148(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar2 = *(int *)(param_1 + 0x2c);
    if (((*(uint *)(param_1 + 0x14) & 0x20000) != 0) && (*DAT_08081180 != 0)) {
      uVar1 = FUN_0803a578(*DAT_08081180,6,0);
      *(undefined1 *)(iVar2 + 0xb7) = uVar1;
    }
  }
  return in_lr;
}


