// undefined FUN_0806a5c8(void)
// entry 0x806a5c8


undefined4 FUN_0806a5c8(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  uVar6 = *(byte *)(param_1 + 10) >> 4 & 1;
  iVar5 = *(int *)(param_1 + 0xb8);
  bVar4 = *(byte *)(param_1 + 199) + 1;
  *(byte *)(param_1 + 199) = bVar4;
  if ((bVar4 & 0xf) == 0) {
    iVar1 = (uVar6 * 2 + -1) * 0x1800;
    uVar2 = (uint)*(byte *)(iVar5 + 0xb4) + (uVar6 + 1 & 1) * 0x80;
    iVar3 = iVar1 * *(short *)((uVar2 * 0x1000000 + 0x40000000 >> 0x17) + DAT_0806a65c);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    local_1c = (iVar3 >> 8) + *(int *)(iVar5 + 0x54);
    iVar1 = *(short *)((uVar2 & 0xff) * 2 + DAT_0806a65c) * iVar1;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    local_18 = (iVar1 >> 8) + *(int *)(iVar5 + 0x58);
    FUN_080c9804(&local_1c,(uint)*(byte *)(iVar5 + 0xb4),uVar6);
  }
  return in_lr;
}


