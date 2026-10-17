// undefined FUN_0808b930(void)
// entry 0x808b930


undefined4 FUN_0808b930(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_1c = *(int *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + DAT_0808ba40;
    FUN_080d0dc4(0,&local_1c,0x200,*(undefined1 *)(param_1 + 0xbd));
    FUN_080d9990(param_1 + 0x54,0,bVar1 >> 4 & 1);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    FUN_0801cf00(param_1,DAT_0808ba44);
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    FUN_08002b10(0x2a);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    uVar3 = DAT_0808ba4c * *DAT_0808ba48 + DAT_0808ba50;
    local_1c = *(int *)(param_1 + 0x54) + (((uVar3 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
    uVar3 = DAT_0808ba4c * (uVar3 & 0x7fffffff) + DAT_0808ba50;
    *DAT_0808ba48 = uVar3 & 0x7fffffff;
    local_18 = *(int *)(param_1 + 0x58) + (((uVar3 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100 +
               DAT_0808ba40;
    FUN_080d0c88(1,&local_1c);
    FUN_0808bdac(param_1);
    FUN_0802ab88(3,9,param_1 + 0x54);
    if (*(ushort *)(DAT_0808ba54 + 0xc) <= DAT_0808ba58) {
      *(ushort *)(DAT_0808ba54 + 0xc) = *(ushort *)(DAT_0808ba54 + 0xc) + 1;
    }
    FUN_0802abe0(param_1,param_1 + 0x54);
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808ba5c);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0x10);
  }
  return in_lr;
}


