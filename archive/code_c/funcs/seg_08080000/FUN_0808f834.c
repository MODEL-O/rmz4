// undefined FUN_0808f834(void)
// entry 0x808f834


undefined4 FUN_0808f834(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_1c = *(int *)(param_1 + 0x54);
    local_18 = *(undefined4 *)(param_1 + 0x58);
    FUN_080d0dc4(0,&local_1c,0x200,*(undefined1 *)(param_1 + 0xba));
    FUN_080daae0(param_1 + 0x54,0,bVar1 >> 4 & 1);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    FUN_0801cf00(param_1,DAT_0808f95c);
    *(undefined4 *)(param_1 + 0x60) = 0xffffff80;
    *(undefined1 *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar3 = *(int *)(param_1 + 0x60) + 0x20;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x380 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x380;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    FUN_08002b10(0x31);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    uVar4 = DAT_0808f964 * *DAT_0808f960 + DAT_0808f968;
    local_1c = *(int *)(param_1 + 0x54) + (((uVar4 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
    uVar4 = DAT_0808f964 * (uVar4 & 0x7fffffff) + DAT_0808f968;
    *DAT_0808f960 = uVar4 & 0x7fffffff;
    local_18 = *(int *)(param_1 + 0x58) + (((uVar4 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
    FUN_080d0c88(1,&local_1c);
    FUN_0808fb98(param_1);
    FUN_0802ab88(4,0xe,param_1 + 0x54);
    if (*(ushort *)(DAT_0808f96c + 0xc) <= DAT_0808f970) {
      *(ushort *)(DAT_0808f96c + 0xc) = *(ushort *)(DAT_0808f96c + 0xc) + 1;
    }
    FUN_0802abe0(param_1,param_1 + 0x54);
    piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808f974);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 0x10);
  }
  return in_lr;
}


