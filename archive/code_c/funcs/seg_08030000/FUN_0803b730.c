// undefined FUN_0803b730(void)
// entry 0x803b730


/* WARNING: Removing unreachable block (ram,0x0803b7d2) */

undefined4 FUN_0803b730(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0xb4);
  FUN_0801cc9c();
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x5300);
  FUN_08002b10(0x1a);
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x54) - *(int *)(iVar5 + 0x54);
  uVar2 = DAT_0803b7f4;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar2 = 0x700;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  uVar2 = DAT_0803b7f8;
  FUN_08005760(param_1 + 0x74,DAT_0803b7f8,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  iVar3 = FUN_0803a4a8(iVar5);
  uVar4 = iVar3 + 0xcU & 0xff;
  cVar1 = FUN_08038a78(iVar5);
  if (cVar1 != '\0') {
    uVar4 = (iVar3 + 0xcU & 0x7f) << 1;
  }
  FUN_08005794(param_1 + 0x74,uVar2,uVar4,
               *(undefined1 *)((uint)*(byte *)(param_1 + 0xc1) + DAT_0803b82c),0xffffffff,0xffffffff
              );
  return in_lr;
}


