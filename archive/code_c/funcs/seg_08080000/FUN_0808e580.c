// undefined FUN_0808e580(void)
// entry 0x808e580


undefined4 FUN_0808e580(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  uVar5 = (uint)*(byte *)(param_1 + 0xd);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_080c01a0(param_1,param_1 + 0x54,0,0);
    FUN_0808e95c(param_1);
    FUN_0801cf00(param_1,DAT_0808e62c);
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x54) - *(int *)(iVar6 + 0x54);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) - *(int *)(iVar6 + 0x58);
    puVar4 = (undefined2 *)(uVar5 * 2 + DAT_0808e630);
    *(undefined2 *)(param_1 + 0x50) = *puVar4;
    *(undefined2 *)(param_1 + 0x52) = *puVar4;
    *(undefined2 *)(param_1 + 0xb8) = *puVar4;
    puVar3 = (undefined1 *)(uVar5 + DAT_0808e634);
    *(undefined1 *)(param_1 + 0x24) = *puVar3;
    *(undefined1 *)(param_1 + 0x12) = *puVar3;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar2 = DAT_0808e638;
  *(uint *)(param_1 + 0x54) =
       *(int *)(iVar6 + 0x54) + ((uint)bVar1 * 2 + -1) * *(int *)(uVar5 * 8 + DAT_0808e638);
  *(int *)(param_1 + 0x58) = *(int *)(iVar6 + 0x58) + *(int *)(uVar5 * 8 + iVar2 + 4);
  return in_lr;
}


