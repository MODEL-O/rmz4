// undefined FUN_080851fc(void)
// entry 0x80851fc


undefined4 FUN_080851fc(int param_1)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_1c;
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar1 = 0 < *(int *)(*DAT_08085230 + 0x54) - *(int *)(param_1 + 0x54);
    if (*(char *)(param_1 + 0x10) == '\x01') {
      bVar1 = !bVar1;
    }
    uVar5 = (uint)bVar1;
    if (uVar5 == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + uVar5 * -0x100;
    FUN_0801cf00(param_1,*(undefined2 *)
                          (((uint)*(byte *)(param_1 + 0x10) * 2 + (uint)*(byte *)(param_1 + 0xb8)) *
                           2 + DAT_080852c0));
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    local_1c = *(int *)(param_1 + 0x54);
    local_18 = *(undefined4 *)(param_1 + 0x58);
    uVar2 = uVar5;
    if (*(char *)(param_1 + 0x10) == '\x01') {
      uVar2 = (uint)(bVar1 ^ 1);
    }
    FUN_080d0dc4(0,&local_1c,0x200,uVar2);
    if (*(char *)(param_1 + 0x10) == '\x01') {
      uVar5 = (uint)(bVar1 ^ 1);
    }
    local_1c = uVar5 * -0xc0 + 0x60;
    local_18 = 0x60;
    FUN_080d76bc(param_1,param_1 + 0x54,&local_1c,0,
                 ((uint)*(byte *)(param_1 + 0x10) * 2 + (uint)*(byte *)(param_1 + 0xb8)) * 2 +
                 DAT_08085344,0x18);
    *(undefined1 *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  FUN_0801cff0(param_1);
  cVar4 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar4;
  if (cVar4 == '\0') {
    FUN_0808516c(param_1);
  }
  return in_lr;
}


