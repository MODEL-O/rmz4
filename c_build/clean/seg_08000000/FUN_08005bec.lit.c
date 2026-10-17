// undefined FUN_08005bec(void)
// entry 0x8005bec


void FUN_08005bec(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  pbVar2 = 0x030032e0;
  if (((*(byte *)0x030032e0) & 0x80) != 0) {
    return;
  }
  iVar5 = *(int *)(param_2 + 4);
  if ((*(uint *)(param_1 + 0x3c) & *(uint *)(iVar5 + 4)) == 0) {
    return;
  }
  iVar6 = *(int *)(param_1 + 4);
  if ((*(char *)(iVar6 + 2) == '\x03') && ((*(byte *)(iVar5 + 9) & 4) != 0)) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x20000000;
    *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 0x20000000;
    *(int *)(pbVar2 + 0x628) = param_1;
  }
  if ((*(char *)(iVar6 + 2) == '\x04') && ((*(byte *)(iVar5 + 9) & 0x10) != 0)) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x40000000;
    *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 0x40000000;
    *(int *)(pbVar2 + 0x0000062c) = param_1;
  }
  if ((*(char *)(iVar6 + 2) == '\x05') && ((*(byte *)(iVar5 + 9) & 8) != 0)) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x80000000;
    *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 0x80000000;
    *(int *)(pbVar2 + 0x630) = param_1;
  }
  if (((int)(uint)*pbVar2 >> *(sbyte *)(iVar5 + 1) & 1U) != 0) {
    return;
  }
  if (((((*(byte *)(iVar6 + 10) & 0x21) != 0) && ((*(byte *)(iVar5 + 10) & 4) != 0)) &&
      (uVar7 = *(uint *)(param_1 + 0x18), (uVar7 & 0x800) == 0)) &&
     ((*(uint *)(param_2 + 0x18) & 0x400) == 0)) {
    if (((*(uint *)(param_1 + 0x1c) & 0x800) == 0) && ((*(uint *)(param_2 + 0x1c) & 0x400) == 0)) {
      *(int *)(param_1 + 0x10) = param_2;
      *(int *)(param_2 + 0x10) = param_1;
      if ((*(byte *)(iVar6 + 10) & 2) == 0) {
        uVar3 = (undefined1)((*(byte *)(iVar6 + 10) & 0xf0) >> 1);
        *(undefined1 *)(param_2 + 0x21) = uVar3;
      }
      else {
        *(undefined1 *)(param_2 + 0x21) = 0xff;
        uVar3 = 0xff;
      }
      *(undefined1 *)(param_1 + 0x21) = uVar3;
      uVar7 = *(uint *)(param_1 + 0x14) | 0x800;
      *(uint *)(param_1 + 0x14) = uVar7;
      uVar9 = *(uint *)(param_2 + 0x14) | 0x400;
      *(uint *)(param_2 + 0x14) = uVar9;
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | uVar7;
      uVar9 = *(uint *)(param_2 + 0x18) | uVar9;
    }
    else {
      if (((*(int *)(param_1 + 0x10) != param_2) || (*(int *)(param_2 + 0x10) != param_1)) ||
         ((((*(byte *)(iVar6 + 10) & 2) == 0 || (*(char *)(param_1 + 0x21) == '\0')) &&
          ((*(char *)(param_1 + 0x21) == '\0' || (*(char *)(param_2 + 0x21) == '\0'))))))
      goto LAB_08005d86;
      uVar8 = *(uint *)(param_1 + 0x14) | 0x800;
      *(uint *)(param_1 + 0x14) = uVar8;
      uVar9 = *(uint *)(param_2 + 0x14) | 0x400;
      *(uint *)(param_2 + 0x14) = uVar9;
      *(uint *)(param_1 + 0x18) = uVar8 | uVar7;
      uVar9 = *(uint *)(param_2 + 0x18) | uVar9;
    }
    *(uint *)(param_2 + 0x18) = uVar9;
  }
LAB_08005d86:
  uVar7 = *(uint *)(param_2 + 0x18);
  if ((uVar7 & 9) != 0) {
    return;
  }
  iVar5 = *(int *)(param_2 + 4);
  if ((*(uint *)(param_1 + 0x3c) & *(uint *)(iVar5 + 0xc)) != 0) {
    iVar6 = *(int *)(param_1 + 4);
    if ((((*(char *)(iVar6 + 2) == '\x01') && (*(byte *)(iVar6 + 4) != 0)) &&
        ((*(uint *)(param_2 + 0x1c) & 0x18) != 0)) &&
       (((*(byte *)(param_2 + 0x23) & 0xf) == *(byte *)(iVar6 + 4) &&
        (*(byte *)(param_1 + 0x3a) <= *(byte *)(param_2 + 0x22))))) {
      *(int *)(param_1 + 0xc) = param_2;
      *(int *)(param_2 + 0xc) = param_1;
      uVar9 = 0x10;
      goto LAB_0800612c;
    }
    if (*(char *)(iVar5 + 8) != -1) {
      *(int *)(param_1 + 0xc) = param_2;
      uVar7 = *(uint *)(param_1 + 0x14);
      *(uint *)(param_1 + 0x14) = uVar7 | 0x20;
      if ((*(byte *)(iVar5 + 9) & 1) != 0) {
        *(uint *)(param_1 + 0x14) = uVar7 | 0x1020;
      }
    }
    if ((*(char *)(param_2 + 0x20) != '\0') || (*(char *)(param_1 + 0x37) == -1)) goto LAB_08005fda;
    *(int *)(param_2 + 0xc) = param_1;
    *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 8;
    *(byte *)(param_2 + 0x23) = *(byte *)(iVar6 + 4) & 0xf | *(char *)(param_1 + 0x38) << 4;
    *(undefined1 *)(param_2 + 0x22) = *(undefined1 *)(param_1 + 0x3a);
    if ((*(byte *)(param_1 + 0x39) & 4) != 0) {
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x1000;
    }
    bVar1 = *(byte *)(param_1 + 0x39);
    if ((bVar1 & 1) != 0) {
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x4000;
    }
    if ((bVar1 & 2) != 0) {
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x8000;
    }
    if ((bVar1 & 0x10) != 0) {
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x10000;
    }
    if ((bVar1 & 0x20) != 0) {
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x20000;
    }
    if ((bVar1 & 0x40) != 0) {
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x400000;
    }
LAB_08006120:
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | *(uint *)(param_1 + 0x14);
    uVar9 = *(uint *)(param_2 + 0x18);
    uVar7 = *(uint *)(param_2 + 0x14);
LAB_0800612c:
    *(uint *)(param_2 + 0x18) = uVar9 | uVar7;
    return;
  }
  iVar6 = *(int *)(param_1 + 4);
  if (*(char *)(iVar6 + 2) == '\x01') {
    if (*(char *)(iVar5 + 8) != -1) {
      if ((((*(uint *)(param_2 + 0x1c) & 3) != 0) &&
          ((*(byte *)(param_2 + 0x23) & 0xf) == *(byte *)(iVar6 + 4))) &&
         (*(byte *)(param_1 + 0x3a) <= *(byte *)(param_2 + 0x22))) {
        *(int *)(param_1 + 0xc) = param_2;
        *(int *)(param_2 + 0xc) = param_1;
        uVar9 = 2;
        goto LAB_0800612c;
      }
      goto LAB_08005f1e;
    }
  }
  else {
LAB_08005f1e:
    if (*(char *)(iVar5 + 8) != -1) {
      *(int *)(param_1 + 0xc) = param_2;
      uVar9 = *(uint *)(param_1 + 0x14);
      *(uint *)(param_1 + 0x14) = uVar9 | 4;
      if ((*(byte *)(iVar5 + 9) & 1) != 0) {
        *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x2000;
        *(uint *)(param_1 + 0x14) = uVar9 | 0x1004;
      }
    }
  }
  pcVar10 = (char *)(param_2 + 0x20);
  if (*(char *)(iVar5 + 2) == '\x02') {
    if (*pcVar10 != '\0') {
      if ((*(byte *)(param_1 + 0x3a) <= *(byte *)(param_2 + 0x22)) && (*(char *)(iVar6 + 4) != '\0')
         ) {
        *(undefined4 *)(param_1 + 0x14) = 0;
        return;
      }
      goto LAB_08005f76;
    }
LAB_08005f8c:
    if (*(char *)(param_1 + 0x37) != -1) {
      *(int *)(param_2 + 0xc) = param_1;
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 1;
      *(byte *)(param_2 + 0x23) = *(byte *)(iVar6 + 4) & 0xf | *(char *)(param_1 + 0x38) << 4;
      *(undefined1 *)(param_2 + 0x22) = *(undefined1 *)(param_1 + 0x3a);
      if ((*(byte *)(param_1 + 0x39) & 4) != 0) {
        *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x2000;
        *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x1000;
      }
      bVar1 = *(byte *)(param_1 + 0x39);
      if ((bVar1 & 1) != 0) {
        *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x4000;
      }
      if ((bVar1 & 2) != 0) {
        *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x8000;
      }
      if ((bVar1 & 0x10) != 0) {
        *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x10000;
      }
      if ((bVar1 & 0x20) != 0) {
        *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x20000;
      }
      if ((bVar1 & 0x40) != 0) {
        *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x800000;
        *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x400000;
      }
      iVar5 = FUN_08005b30(param_1,param_2);
      iVar5 = (uint)*(ushort *)(param_2 + 0x30) - iVar5;
      *(short *)(param_2 + 0x30) = (short)iVar5;
      if (iVar5 * 0x10000 < 1) {
        *(undefined2 *)(param_2 + 0x30) = 0;
        *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x200;
      }
      if ((*(char *)(*(int *)(param_2 + 4) + 8) != -1) &&
         ((byte)(*(char *)(*(int *)(param_1 + 4) + 4) - 1U) < 2)) {
        *(undefined1 *)(0x030032e0 + 2) = 4;
      }
      cVar4 = *(char *)(*(int *)(param_2 + 4) + 2);
      if (cVar4 == '\x01') {
        if (*(char *)(*(int *)(0x0202f610 + 0x000063a8) + 0xc5) != '\x11') goto LAB_0800611c;
        cVar4 = 'b';
      }
      else {
        if (cVar4 != '\x02') goto LAB_08006120;
LAB_0800611c:
        cVar4 = 'Z';
      }
      *pcVar10 = cVar4;
      goto LAB_08006120;
    }
  }
  else {
LAB_08005f76:
    if ((*pcVar10 == '\0') || (*(byte *)(param_2 + 0x22) < *(byte *)(param_1 + 0x3a)))
    goto LAB_08005f8c;
  }
  if ((*(byte *)(param_1 + 0x39) & 4) != 0) {
    *(int *)(param_1 + 0xc) = param_2;
    *(uint *)(param_2 + 0x18) = uVar7 | 0x1000;
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x2000;
  }
  if ((*(byte *)(param_1 + 0x39) & 0x40) != 0) {
    *(int *)(param_1 + 0xc) = param_2;
    *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 0x400000;
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x800000;
  }
LAB_08005fda:
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | *(uint *)(param_1 + 0x14);
  return;
}


