// undefined FUN_080f872c(void)
// entry 0x80f872c


longlong FUN_080f872c(undefined4 *param_1)

{
  uint uVar1;
  ushort uVar2;
  uint in_lr;
  longlong lVar3;
  
  uVar1 = FUN_08006f50(*param_1,param_1[1]);
  uVar1 = uVar1 & 0xffff;
  uVar2 = *(ushort *)(DAT_080f8768 + 0x1d0) & 0x7f;
  if (uVar2 == 10) {
    if (uVar1 + DAT_080f876c < 99) {
                    /* WARNING: Could not recover jumptable at 0x080f8766. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar3 = (**(code **)((uVar1 + DAT_080f876c) * 4 + DAT_080f8770))();
      return lVar3;
    }
  }
  else if (uVar2 == 0xd) {
    if (uVar1 - 0x25 < 0x11b) {
                    /* WARNING: Could not recover jumptable at 0x080f891c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar3 = (**(code **)((uVar1 - 0x25) * 4 + DAT_080f8920))();
      return lVar3;
    }
  }
  else if ((uVar2 == 0xf) && (uVar1 + DAT_080f8db4 < 0x4b)) {
                    /* WARNING: Could not recover jumptable at 0x080f8db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (**(code **)((uVar1 + DAT_080f8db4) * 4 + DAT_080f8db8))();
    return lVar3;
  }
  return (ulonglong)in_lr << 0x20;
}


