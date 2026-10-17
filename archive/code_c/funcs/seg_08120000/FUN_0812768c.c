// undefined FUN_0812768c(void)
// entry 0x812768c


void FUN_0812768c(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  param_2 = param_2 & 0xff;
  param_3 = param_3 << 0x18;
  if (0xb2 < param_2) {
    param_2 = 0xb2;
    param_3 = -0x1000000;
  }
  uVar4 = *(uint *)((*(byte *)(param_2 + DAT_081276e8) & 0xf) * 4 + DAT_081276ec) >>
          (uint)(*(byte *)(param_2 + DAT_081276e8) >> 4);
  bVar1 = *(byte *)(param_2 + 1 + DAT_081276e8);
  uVar3 = *(undefined4 *)(param_1 + 4);
  iVar2 = FUN_08126af4((*(uint *)((bVar1 & 0xf) * 4 + DAT_081276ec) >> (uint)(bVar1 >> 4)) - uVar4,
                       param_3);
  FUN_08126af4(uVar3,uVar4 + iVar2);
  return;
}


